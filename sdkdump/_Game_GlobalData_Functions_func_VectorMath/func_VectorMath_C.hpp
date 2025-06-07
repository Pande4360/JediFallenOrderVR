#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Functions_func_VectorMath {
#pragma pack(push, 1)
struct func_VectorMath_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SmallestEnclosingSphere(void*& Points, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& CenterPoint);
    void _2D_Distance__Actor_Location_(_Script_Engine::Actor* Actor_1, _Script_Engine::Actor* Actor_2, _Script_CoreUObject::Object* __WorldContext, float& _2D_Distance);
    void Distance__Location_Vector_(_Script_CoreUObject::Vector Location_A, _Script_CoreUObject::Vector Location_B, _Script_CoreUObject::Object* __WorldContext, float& Distance);
    void SignedAngleBetweenVectors(_Script_CoreUObject::Vector Vector_A, _Script_CoreUObject::Vector Vector_B_Forward, _Script_CoreUObject::Vector Vector_B_Right, _Script_CoreUObject::Object* __WorldContext, float& Angle);
    void AngleBetweenVectors(_Script_CoreUObject::Vector Vector_A, _Script_CoreUObject::Vector Vector_B, _Script_CoreUObject::Object* __WorldContext, float& Angle);
    void Target_Within_Cone_(_Script_CoreUObject::Vector Cone_Start_Pos, _Script_CoreUObject::Vector Cone_Facing_Dir, float Half_Angle, _Script_CoreUObject::Vector targetPos, _Script_CoreUObject::Object* __WorldContext, bool& IsWithinCone);
    void World_Direction__World_Position_(_Script_CoreUObject::Vector Start_World_Pos, _Script_CoreUObject::Vector End_World_Pos, bool Normalize, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& World_Direction);
    void World_Direction__Actor_Location_(_Script_Engine::Actor* Start_Actor, _Script_Engine::Actor* Target_Actor, bool Normalize, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& World_Direction);
    void Distance__Actor_Location_(_Script_Engine::Actor* Actor_A, _Script_Engine::Actor* Actor_B, _Script_CoreUObject::Object* __WorldContext, float& Distance);
}; // Size: 0x28
#pragma pack(pop)
}
