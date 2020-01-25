#include <bits/stdc++.h>

class Box {
    private:
        int length, breadth, height;
    public:
        /**
         * Constructs an instanfe of Box with all dimensions equal to 0.
         */
        Box() {
            length = 0;
            breadth = 0;
            height = 0;
        }

        /**
         * Constructs an instance of Box with specified dimensions.
         */
        Box(int length, int breadth, int height) {
            Box::length = length;
            Box::breadth = breadth;
            Box::height = height;
        }

        /**
         * Constructs an instance of a Box based on another instance.
         */
        Box(Box const& box) {
            length = box.length;
            breadth = box.breadth;
            height = box.height;
        }

        /**
         * Calculates de volume of the Box instance.
         * @return volume of the box.
         */
        long long CalculateVolume() {
            return length * breadth * height;
        }

        /**
         * Compares two Box's instances by their dimensions.
         */
        bool operator<(Box const& box) {
            if (length < box.length ||
                (breadth < box.breadth && length == box.length) ||
                (height < box.height && breadth == box.breadth && length == box.length)) {
                return true;
            }
        }

        /**
         * ? How this works?
         */
        friend std::ostream& operator<<(std::ostream& out, Box const& box);
};

/**
 * ? How this works?
 */
std::ostream& operator<<(std::ostream& out, Box const& box) {
    out << box.length << " " << box.breadth << " " << box.height << endl;
    return out;
}

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