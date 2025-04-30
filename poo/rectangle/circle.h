class Circle{

private:

    int m_raio;
    static int m_pi;

public:

    Circle(int raio);
    Circle();

    int getRaio();
    void setRaio(int raio);

    int areaCircle();
};

