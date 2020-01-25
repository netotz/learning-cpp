#include <bits/stdc++.h>

class Box {
    private:
        int length, breadth, height;
    public:
        /**
         * Constructs an instanfe of Box with all dimensions equal to 0.
         */
        Box() : length(0), breadth(0), height(0) {}

        /**
         * Constructs an instance of Box with specified dimensions.
         */
        Box(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}

        /**
         * Constructs an instance of a Box based on another instance.
         */
        Box(const Box& box) : length(box.length), breadth(box.breadth), height(box.height) {}

        /**
         * Calculates de volume of the Box instance.
         * @return volume of the box.
         */
        long long CalculateVolume() {
            return (long long)length * breadth * height;
        }

        /**
         * Compares two Box's instances by their dimensions.
         */
        bool operator<(const Box& box) {
            if (length < box.length ||
                (breadth < box.breadth && length == box.length) ||
                (height < box.height && breadth == box.breadth && length == box.length)) {
                return true;
            }
            else {
                return false;
            }
        }

        /**
         * ? How this works?
         */
        friend std::ostream& operator<<(std::ostream& out, const Box& box);
};

/**
 * ? How this works?
 */
std::ostream& operator<<(std::ostream& out, const Box& box) {
    out << box.length << " " << box.breadth << " " << box.height;
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
            case 1:{
                std::cout << temp << std::endl;
                break;
            }
            case 2:{
                int l, b, h;
                std::cin >> l >> b >> h;
                Box NewBox(l, b, h) ;
                temp = NewBox;
                std::cout << temp << std::endl;
                break;
            }
            case 3:{
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
            }
            case 4:{
                std::cout << temp.CalculateVolume()  << std::endl;
                break;
            }
            case 5:{
                Box NewBox(temp) ;
                std::cout << NewBox << std::endl;
                break;
            }
        }
	}
}

int main() {
	check2() ;
}