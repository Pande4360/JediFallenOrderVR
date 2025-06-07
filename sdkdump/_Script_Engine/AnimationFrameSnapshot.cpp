#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationFrameSnapshot.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimationFrameSnapshot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationFrameSnapshot");
    return result;
}
