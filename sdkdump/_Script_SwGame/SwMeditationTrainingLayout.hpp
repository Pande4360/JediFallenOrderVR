#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingLayout {
    private: char pad_0[0x40]; public:
    void* get_ArenaName();
    void* get_GridSize();
    void* get_EnabledHeroModifierList();
    void* get_EnemyDefinitionIdentifiers();
    void* get_EnemyTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
