#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct NavMovementComponent;
}
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PathFollowingComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x1a8]; public:
    _Script_Engine::NavMovementComponent*& get_MovementComp();
    _Script_NavigationSystem::NavigationData*& get_MyNavData();
    static _Script_CoreUObject::Class* static_class();
    void OnActorBump(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* OtherActor, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    _Script_CoreUObject::Vector GetPathDestination();
    void* GetPathActionType();
}; // Size: 0x318
#pragma pack(pop)
}
