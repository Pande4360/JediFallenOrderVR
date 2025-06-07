#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Random.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Random::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Random");
    return result;
}
