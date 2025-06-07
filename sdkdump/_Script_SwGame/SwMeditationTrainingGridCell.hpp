#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingGridCell : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x60]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnTriedToSpawnWithNoPoints();
    void OnStatusChanged(void* Status, bool bNewValue);
    bool HasStatus(void* Status);
    bool HasAnyStatus(void* Flags);
    bool HasAllStatus(void* Flags);
}; // Size: 0x3d0
#pragma pack(pop)
}
