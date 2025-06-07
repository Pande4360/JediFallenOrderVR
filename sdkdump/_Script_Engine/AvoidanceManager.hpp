#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MovementComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AvoidanceManager : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    float& get_DefaultTimeToLive();
    float& get_LockTimeAfterAvoid();
    float& get_LockTimeAfterClean();
    float& get_DeltaTimeToPredict();
    float& get_ArtificialRadiusExpansion();
    float& get_TestHeightDifference();
    float& get_HeightCheckMargin();
    static _Script_CoreUObject::Class* static_class();
    bool RegisterMovementComponent(_Script_Engine::MovementComponent* MovementComp, float AvoidanceWeight);
    int32_t GetObjectCount();
    int32_t GetNewAvoidanceUID();
    _Script_CoreUObject::Vector GetAvoidanceVelocityForComponent(_Script_Engine::MovementComponent* MovementComp);
}; // Size: 0xe0
#pragma pack(pop)
}
