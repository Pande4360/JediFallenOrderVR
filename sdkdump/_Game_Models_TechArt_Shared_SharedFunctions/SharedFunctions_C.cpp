#include "..\FUObjectArray.hpp"
#include "SharedFunctions_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
_Script_CoreUObject::Class* _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/TechArt/Shared/SharedFunctions.SharedFunctions_C");
    return result;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::Turn_Off_Collision_For_Test_Maps(void* Floor_Name, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::Get_Spline_World_Location_and_Rotation_at_Time(float Time__0_1_, _Script_Engine::SplineComponent* Spline, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::isActorUnique(_Script_Engine::Actor* actorObject, _Script_CoreUObject::Object* __WorldContext, bool& unique) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::LookAt__Component____Transform_(_Script_Engine::SceneComponent* Component__Looking__, _Script_CoreUObject::Transform Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::getContainingLevel(_Script_CoreUObject::Object* Object, _Script_CoreUObject::Object* __WorldContext, void*& containingLevel) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::LookAt__Component____Vector_(_Script_Engine::SceneComponent* Component__Looking__, _Script_CoreUObject::Vector Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Models_TechArt_Shared_SharedFunctions::SharedFunctions_C::LookAt__Actor____Transform_(_Script_Engine::Actor* Component__Looking__, _Script_CoreUObject::Transform Where_to_look___World_Space_, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
