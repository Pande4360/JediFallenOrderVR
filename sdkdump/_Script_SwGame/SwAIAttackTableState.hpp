#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAttackState.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIAttackTableState : public SwAttackState {
    private: char pad_258[0x18]; public:
    _Script_Engine::DataTable*& get_AttackTable();
    void* get_StartAttackName();
    float& get_DistanceToCheck();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
