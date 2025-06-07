#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator_BlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_IsAtLocation : public BTDecorator_BlackboardBase {
    private: char pad_90[0x40]; public:
    float& get_AcceptableRadius();
    void* get_ParametrizedAcceptableRadius();
    void* get_GeometricDistanceType();
    bool get_bUseParametrizedRadius();
    void set_bUseParametrizedRadius(bool value);
    bool get_bUseNavAgentGoalLocation();
    void set_bUseNavAgentGoalLocation(bool value);
    bool get_bPathFindingBasedTest();
    void set_bPathFindingBasedTest(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
