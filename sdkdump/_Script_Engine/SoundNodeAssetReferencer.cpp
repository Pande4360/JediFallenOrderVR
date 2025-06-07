#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeAssetReferencer.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeAssetReferencer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeAssetReferencer");
    return result;
}
