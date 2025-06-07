#include "..\FUObjectArray.hpp"
#include "func_CharacterActions_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_CharacterActions::func_CharacterActions_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_CharacterActions.func_CharacterActions_C");
    return result;
}
void _Game_GlobalData_Functions_func_CharacterActions::func_CharacterActions_C::CollisionImpulse(float Impulse_Amount, _Script_Engine::Character* Impulse_Origin__Actor_, _Script_Engine::CharacterMovementComponent* Target_Impulse, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_GlobalData_Functions_func_CharacterActions::func_CharacterActions_C::AddTranslation(_Script_Engine::Actor* Actor, float TweenTime, float ForwardTranslationAmount, float UpTranslation, bool isImpulse, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
