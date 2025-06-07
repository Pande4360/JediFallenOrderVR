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
struct SwGameDestructibleActorSaveGameState {
    private: char pad_0[0x60]; public:
    int32_t& get_m_SavedEncountersInstance();
    int32_t& get_m_FirstPhaseIndex();
    int32_t& get_m_NumValidPhases();
    int32_t& get_m_ParallelStatesInitialized();
    void* get_m_ActiveParallelStateType();
    float& get_m_TotalDamagePoints();
    void* get_m_SavedStatePerDestructionPhase();
    void* get_m_SavedStatePerDestructionPiece();
    void* get_m_StartedPhysicsOnHitBones();
    void* get_m_ActorUndamagedState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
