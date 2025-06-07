#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_ConeCheck : public BTDecorator {
    private: char pad_68[0x88]; public:
    float& get_ConeHalfAngle();
    void* get_ConeOrigin();
    void* get_ConeDirection();
    void* get_Observed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
