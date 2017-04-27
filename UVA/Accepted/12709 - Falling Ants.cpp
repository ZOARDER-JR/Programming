#include <iostream>

using namespace std;

int main() {
	int t;
	int l, h, w, maxH;
	long long v, maxV;
	while (cin >> t && t) {
		maxH = maxV = v= 0;
		while(t--) {
			cin >> l >> w >> h;

			if(h > maxH) 
			{
				v = l * w * h;
				maxH = h;
			}
			else if(h==maxH)
			{
				if((l*h*w)>v)
				{
					v = l * w * h;
				}
			}
		}
		cout << v << endl;
	}
	return 0;
}