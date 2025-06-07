#include "..\FUObjectArray.hpp"
#include "AnimSequencerInstanceProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimSequencerInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy");
    return result;
}
