# CLInterpreter
## [Documentation](documentation.html)
### By Igor Parfenov

An interpreter for CL language working on Linux OS only. Built and used on Ubuntu 21.10 (Impish Indri).

## How to run

The repository contains the built interpreter. Run cli with path to source file to start interpreting.
Example `.cli file`

## How to Compile

You have to require following conditions:
   GNU G++ (author version 9.4.0)
   GNU Make (author version 4.3)
   BNFC (author downloaded binary from [BNFC](httpsbnfc.digitalgrammars.comdownload), version 2.9.4, program has to be added to [PATH](httpsopensource.comarticle176set-path-linux))
   Flex (author version 2.6.4)
   GNU Bison (author version 3.7.6)

Compilation
   Enter repository directory `cd CL`
   Compile syntax grammar `make syntax`
   Compile interpreter `make interpreter`
