#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeQualityLevel.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeQualityLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeQualityLevel");
    return result;
}
