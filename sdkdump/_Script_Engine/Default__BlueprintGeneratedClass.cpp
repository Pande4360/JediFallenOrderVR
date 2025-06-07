#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Default__BlueprintGeneratedClass.hpp"
_Script_CoreUObject::Class* _Script_Engine::Default__BlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Script/Engine.Default__BlueprintGeneratedClass");
    return result;
}
