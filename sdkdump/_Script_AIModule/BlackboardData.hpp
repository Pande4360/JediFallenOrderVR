#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardData : public _Script_Engine::DataAsset {
    private: char pad_30[0x20]; public:
    _Script_AIModule::BlackboardData*& get_Parent();
    void* get_Keys();
    bool get_bHasSynchronizedKeys();
    void set_bHasSynchronizedKeys(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
