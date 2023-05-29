class ParkingSystem {
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small) {
        b = big, m = medium, s = small;
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1:
            if (b <= 0) return 0;
            else {
                b--;
                return 1;
            }
            break;
            case 2:
            if (m <= 0) return 0;
            else {
                m--;
                return 1;
            }
            break;
            case 3:
            if (s <= 0) return 0;
            else {
                s--;
                return 1;
            }
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */