#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "NavMovementComponent.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PawnMovementComponent : public NavMovementComponent {
    private: char pad_200[0x8]; public:
    _Script_Engine::Pawn*& get_PawnOwner();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector K2_GetInputVector();
    bool IsMoveInputIgnored();
    _Script_CoreUObject::Vector GetPendingInputVector();
    _Script_Engine::Pawn* GetPawnOwner();
    _Script_CoreUObject::Vector GetLastInputVector();
    _Script_CoreUObject::Vector ConsumeInputVector();
    void AddInputVector(_Script_CoreUObject::Vector WorldVector, bool bForce);
}; // Size: 0x208
#pragma pack(pop)
}
