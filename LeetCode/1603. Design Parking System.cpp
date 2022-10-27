class ParkingSystem
{
private:
    int park[3] = {};
public:
      
    ParkingSystem(int big, int medium, int small)
    {
        park[0] = big;
        park[1] = medium;
        park[2] = small;
    }

    bool addCar(int carType)
    {
        if (park[carType - 1] > 0)
        {
            park[carType - 1]--;
            return true;
        }
        else
            return false;
    }
};