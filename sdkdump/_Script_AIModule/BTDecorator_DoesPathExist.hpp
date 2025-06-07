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
struct BTDecorator_DoesPathExist : public BTDecorator {
    private: char pad_68[0x60]; public:
    void* get_BlackboardKeyA();
    void* get_BlackboardKeyB();
    bool get_bUseSelf();
    void set_bUseSelf(bool value);
    void* get_PathQueryType();
    void* get_FilterClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
