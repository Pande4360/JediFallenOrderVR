#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeMature.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeMature::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeMature");
    return result;
}
