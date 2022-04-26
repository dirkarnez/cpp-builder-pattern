
template<int T>
class EmailBuildingStrategy;

template<>
class EmailBuildingStrategy<0>  {
    public:

        EmailBuildingStrategy<0>& write();

        void Y();

    // private:
    //     YO& yo;
};

template<>
class EmailBuildingStrategy<1>  {
    public:
        EmailBuildingStrategy<1>& write();
        void Z();
    // private:
    //     YO& yo;
};