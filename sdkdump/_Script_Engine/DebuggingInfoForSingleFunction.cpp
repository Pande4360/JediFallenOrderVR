#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DebuggingInfoForSingleFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::DebuggingInfoForSingleFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DebuggingInfoForSingleFunction");
    return result;
}
