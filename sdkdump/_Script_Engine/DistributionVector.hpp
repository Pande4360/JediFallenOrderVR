#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Distribution.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DistributionVector : public Distribution {
    private: char pad_30[0x8]; public:
    bool get_bCanBeBaked();
    void set_bCanBeBaked(bool value);
    bool get_bIsDirty();
    void set_bIsDirty(bool value);
    bool get_bBakedDataSuccesfully();
    void set_bBakedDataSuccesfully(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
