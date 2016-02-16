#include <iostream>
#include <memory>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::shared_ptr;
using std::string;

struct destination {
	string ip;
	int port;
	destination(string _ip, int _port) : ip(_ip), port(_port) {}
};
struct connection {
	string ip;
	int port;
	connection(string _ip, int _port) : ip(_ip), port(_port) {}
};
connection connect(destination *d) {
	shared_ptr<connection> p(new connection(d->ip, d->port));
	cout << "creat connection" << endl;
	cout << "count = " << p.use_count() << endl;
	return *p;
}
void disconnect(connection c) {
	cout << "DISCONNECT" << endl;
}
void end_connection(connection *p) {
	disconnect(*p);
}
void f(destination &d) {
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	cout << "f count = " << p.use_count() << endl;
}
int main() {
	destination d("202.194.67.76", 8888);
	f(d);
	return 0;
}