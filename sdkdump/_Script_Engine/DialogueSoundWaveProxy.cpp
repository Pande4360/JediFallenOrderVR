#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueSoundWaveProxy.hpp"
#include "SoundBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::DialogueSoundWaveProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DialogueSoundWaveProxy");
    return result;
}
