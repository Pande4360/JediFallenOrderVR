#include "..\FUObjectArray.hpp"
#include "INT_ScriptedAnim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
void _Game_GlobalData_Interfaces_INT_ScriptedAnim::INT_ScriptedAnim_C::ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_ScriptedAnim::INT_ScriptedAnim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_ScriptedAnim.INT_ScriptedAnim_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_ScriptedAnim::INT_ScriptedAnim_C::ScriptedAnimNotify(void* NotifyName) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ScriptedAnim::INT_ScriptedAnim_C::ScriptedAnimEnd() {
    return;
}
