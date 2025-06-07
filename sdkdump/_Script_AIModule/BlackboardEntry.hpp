#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct BlackboardKeyType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardEntry {
    private: char pad_0[0x18]; public:
    void* get_EntryName();
    _Script_AIModule::BlackboardKeyType*& get_KeyType();
    bool get_bInstanceSynced();
    void set_bInstanceSynced(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
