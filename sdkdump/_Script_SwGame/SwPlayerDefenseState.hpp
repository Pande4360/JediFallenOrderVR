#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwDefenseState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerDefenseState : public SwDefenseState {
    private: char pad_130[0x70]; public:
    bool get_bPlayOnEnterAnimation();
    void set_bPlayOnEnterAnimation(bool value);
    void* get_BlockEnterData();
    bool get_bActivateNathanAnimGraph();
    void set_bActivateNathanAnimGraph(bool value);
    void* get_ModifierDefinitionList();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
