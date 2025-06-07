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
struct BTDecorator_KeepInCone : public BTDecorator {
    private: char pad_68[0x60]; public:
    float& get_ConeHalfAngle();
    void* get_ConeOrigin();
    void* get_Observed();
    bool get_bUseSelfAsOrigin();
    void set_bUseSelfAsOrigin(bool value);
    bool get_bUseSelfAsObserved();
    void set_bUseSelfAsObserved(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
