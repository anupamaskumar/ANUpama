<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="scoresheet" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin\Debug\scoresheet" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj\Debug\" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin\Release\scoresheet" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj\Release\" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="-Wall" />
		</Compiler>
		<Unit filename="declaration.h" />
		<Unit filename="final.h" />
		<Unit filename="main.c">
			<Option compilerVar="CC" />
		</Unit>
		<Unit filename="menu.h" />
		<Unit filename="newscoresheet.h" />
		<Unit filename="welcome.h" />
		<Extensions>
			<code_completion />
			<debugger />
		</Extensions>
	</Project>
</CodeBlocks_project_file>

