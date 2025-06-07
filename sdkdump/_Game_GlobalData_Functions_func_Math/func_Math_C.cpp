#include "..\FUObjectArray.hpp"
#include "func_Math_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_Math::func_Math_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_Math.func_Math_C");
    return result;
}
void _Game_GlobalData_Functions_func_Math::func_Math_C::AngleToWorldLocationFromCameraForward(_Script_CoreUObject::Vector WorldLoc, _Script_CoreUObject::Object* __WorldContext, float& AngleDegrees) {
    return;
}
void _Game_GlobalData_Functions_func_Math::func_Math_C::Saturate(float Value, _Script_CoreUObject::Object* __WorldContext, float& Saturated) {
    return;
}
void _Game_GlobalData_Functions_func_Math::func_Math_C::AngleToActorFromCameraForward(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, float& AngleDegrees) {
    return;
}
