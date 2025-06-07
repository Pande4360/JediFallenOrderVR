#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Models_TechArt_Shared_SharedFunctions {
#pragma pack(push, 1)
struct SharedFunctions_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void Get_Spline_World_Location_and_Rotation_at_Time(float Time__0_1_, _Script_Engine::SplineComponent* Spline, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation);
    void Turn_Off_Collision_For_Test_Maps(void* Floor_Name, _Script_CoreUObject::Object* __WorldContext);
    void isActorUnique(_Script_Engine::Actor* actorObject, _Script_CoreUObject::Object* __WorldContext, bool& unique);
    void getContainingLevel(_Script_CoreUObject::Object* Object, _Script_CoreUObject::Object* __WorldContext, void*& containingLevel);
    void LookAt__Actor____Transform_(_Script_Engine::Actor* Component__Looking__, _Script_CoreUObject::Transform Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext);
    void LookAt__Component____Transform_(_Script_Engine::SceneComponent* Component__Looking__, _Script_CoreUObject::Transform Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext);
    void LookAt__Component____Vector_(_Script_Engine::SceneComponent* Component__Looking__, _Script_CoreUObject::Vector Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
