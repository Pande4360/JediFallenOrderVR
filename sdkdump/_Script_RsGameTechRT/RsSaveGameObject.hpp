#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSaveGameObject : public _Script_Engine::SaveGame {
    private: char pad_28[0xf8]; public:
    void* get_Version();
    void* get_ConstructedVersion();
    void* get_ActorRecords();
    void* get_CompressedActorRecords();
    void* get_UncompressedActorRecordsSize();
    void* get_PlayerStartRecord();
    void* get_InitialStreamingAreas();
    bool get_bUsePlayerStartRecord();
    void set_bUsePlayerStartRecord(bool value);
    void* get_SaveSlot();
    void* get_TimeSaved();
    void* get_Changelist();
    void* get_Crc32();
    void* get_MetaData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
