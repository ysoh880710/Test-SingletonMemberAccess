#include <iostream>

class CAManager
{
private:

    struct SMemory
    {
        long m_lA;
        long m_lB;
        long m_lC;
    };

    static CAManager s_Instance;

    SMemory m_stMemory;

    CAManager()
    {
    }

    ~CAManager()
    {
    }

public:

    static void Set(long _l)
    {
        s_Instance.m_stMemory.m_lC = _l;
    }

    static long Get()
    {
        return s_Instance.m_stMemory.m_lC;
    }
};

CAManager CAManager::s_Instance{};

int main()
{
    sizeof(CAManager);

    CAManager::Set(123L);
    long lValue = CAManager::Get();

    return 0;
}