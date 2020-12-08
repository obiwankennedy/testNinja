
set(TS_FILES ninjatest_fr.ts ninjatest_en.ts)

qt5_create_translation(TS_PATH_FILES ${CMAKE_SOURCE_DIR}  ${TS_FILES} OPTION -source-language en_US)


#set_source_files_properties(${TS_FILES} PROPERTIES OUTPUT_LOCATION ".")
#qt5_add_translation(QM_FILES ${TS_FILES})
add_custom_target(translations ALL DEPENDS ${QM_FILES})
