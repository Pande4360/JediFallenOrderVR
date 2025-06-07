#include "..\FUObjectArray.hpp"
#include "func_isHero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_isHero::func_isHero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_isHero.func_isHero_C");
    return result;
}
void _Game_GlobalData_Functions_func_isHero::func_isHero_C::isHero(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, bool& isHero) {
    return;
}
