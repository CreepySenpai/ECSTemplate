#pragma once

struct LifeSpan
{
    int Remaining{0};
    int Total{0};

    LifeSpan(){}

    LifeSpan(int t) : Remaining{t}, Total{t}{}
};
