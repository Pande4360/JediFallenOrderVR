#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwQuicksandInfluenceParameters.hpp"
void* _Script_SwGame::SwQuicksandInfluenceParameters::get_ParametersPerType() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandInfluenceParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwQuicksandInfluenceParameters");
    return result;
}
