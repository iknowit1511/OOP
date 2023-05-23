#include "cToaDo.h"
cToaDo::cToaDo(float x, float y) {
	this->x = x;
	this->y = y;
}
void cToaDo::Nhap() {
	cin >> x;
	cin >> y;
}
float cToaDo::Khoangcach(cToaDo b) {
	return sqrt((this->x - b.x) * (this->x - b.x) + (this->y - b.y) * (this->y - b.y));
}
