#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISenseAffiliationFilter {
    private: char pad_0[0x4]; public:
    bool get_bDetectEnemies();
    void set_bDetectEnemies(bool value);
    bool get_bDetectNeutrals();
    void set_bDetectNeutrals(bool value);
    bool get_bDetectFriendlies();
    void set_bDetectFriendlies(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
