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
struct SwGameDestructibleActorSaveGameState_ActorUndamagedState {
    private: char pad_0[0x18]; public:
    bool get_m_CanBeDamaged();
    void set_m_CanBeDamaged(bool value);
    bool get_m_CanTakeNumericDamage();
    void set_m_CanTakeNumericDamage(bool value);
    void* get_m_UndamagedStateOfComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
