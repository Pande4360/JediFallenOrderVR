#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EmitterCompiledScriptPair.hpp"
_Script_CoreUObject::Class* _Script_Niagara::EmitterCompiledScriptPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.EmitterCompiledScriptPair");
    return result;
}
