#include <bits/stdc++.h>

void check2() {
	int n;
	std::cin >> n;
	Box temp;
	for (int i = 0; i < n; i++) {
		int type;
		std::cin >> type;
        switch (type) {
            case 1:
                std::cout << temp << endl;
                break;
            case 2:
                int l, b, h;
                std::cin >> l >> b >> h;
                Box NewBox(l, b, h) ;
                temp = NewBox;
                std::cout << temp << endl;
                break;
            case 3:
                int l, b, h;
                std::cin >> l >> b >> h;
                Box NewBox(l, b, h) ;
                if (NewBox < temp) {
                    std::cout << "Lesser\n";
                }
                else{
                    std::cout << "Greater\n";
                }
                break;
            case 4:
                std::cout << temp.CalculateVolume()  << endl;
                break;
            case 5:
                Box NewBox(temp) ;
                std::cout << NewBox << endl;
                break;
        }
	}
}

int main() {
	check2() ;
}