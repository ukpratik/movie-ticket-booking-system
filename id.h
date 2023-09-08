class ID{
    private:
        int id_available;

    public:
        int getID(){
            return ++id_available;
        }
};