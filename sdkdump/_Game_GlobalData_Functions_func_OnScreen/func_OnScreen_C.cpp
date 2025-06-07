#include "..\FUObjectArray.hpp"
#include "func_OnScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_OnScreen::func_OnScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_OnScreen.func_OnScreen_C");
    return result;
}
void _Game_GlobalData_Functions_func_OnScreen::func_OnScreen_C::OnScreenCheckSimple(_Script_CoreUObject::Vector ActorLocation, _Script_CoreUObject::Object* __WorldContext, bool& OnScreen) {
    return;
}
